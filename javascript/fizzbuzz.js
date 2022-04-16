for (i = 0; i <= 100; i++) {
  const str = `${i % 3 === 0 ? 'Fizz' : ''}${i % 5 === 0 ? 'Buzz' : ''}`;

  if (str) {
    console.log(str);
  } else {
    console.log(i);
  }
}
