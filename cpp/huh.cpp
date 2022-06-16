#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <thread>

using std::cout;

#define NUM_THREADS std::thread::hardware_concurrency()

unsigned int threads_number() {
	return std::thread::hardware_concurrency();
}

void *hello(void *thread_id) {
	long tid;
	tid = (long)thread_id;

	cout << "Bonjour from thread " << tid << "\n";
}

int main() {
	pthread_t threads[NUM_THREADS];

	for (long i = 0; i < NUM_THREADS; i++) {
		pthread_create(&threads[i], NULL, hello, (void *)i);
	}

	pthread_exit(NULL);
}
