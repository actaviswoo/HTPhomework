# HTPhomework
## Задача:
Напишите функцию, которая инвертирует только выбранные биты в участке памяти, заданном указателем и длиной в байтах. Способ выбора битов для инвертирования на ваше усмотрение.

## Решение:
Проблема полной инверсии решена двумя методами. Первый метод реализован с помощью операции NOT, второй метод реализован с помощью операции XOR. Оба метода оказались эффективными, так как различия в скорости были минимальными, при различных значениях размера массива. Также были реализованы методы выборочной замены битов.

## Makefile
```make all``` 

- для компиляции, запуска приложения и тестов

```make clean```

- для удаление временных файлов

```make main```

- для компиляции и запуска приложений

```make run``` 

- для комплиции, запуска и записи вывода в файл target/temp.txt.

```make test``` 

- для запуска тестов