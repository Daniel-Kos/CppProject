# Session 15 

## Task 2

```text
1) 0 1
2) ветка выполнилась
2) age = 18
3) 1 0
4) 1 1
4) 0 0
```

## Task 3: Dangling Else

**Before fix (group 1, score 9):** 
```text
Утренняя смена, допуск есть
```
**Before fix (group 1, score 5):**
```text
 (empty output)
```
**Before fix (group 2, score 9):** 
```text
Вечерняя смена
```

**After fix:** All three test cases print the correct expected lines.

## Task 4: State Machine

**Output before modification:**
```text
t = -5: Состояние: лёд / некомфортно
t = 22: Состояние: вода / комфортно
t = 100: Состояние: пар / некомфортно
```
**Output after modification:**
```text
t = 0: Состояние: лёд / Точка замерзания / некомфортно
t = 100: Состояние: пар / Точка кипения / некомфортно
```

## Checkpoint 1: Explore

**Output before fix:**
```text
1, 0, нижний ярус, два, три, доступ открыт
```
**Output after fix (added break):**
```text
 1, 0, нижний ярус, два, доступ открыт
```

## Checkpoint 2: Bot

```text
Input a: Влево
Input q: Выход из программы
Input z: Неизвестная команда
```

## Checkpoint 3: Grant

```text
(9, 1): Стипендия назначена 
(7, 0): Стипендия не назначена
(9, 4): Стипендия не назначена
(12, 0): Ошибка: балл от 0 до 10
```

## Project: Delivery

```text
(3, 2, 0): К оплате: 120 руб / Груз: стандартный
(12, 1, 1): К оплате: 400 руб / Груз: тяжёлый срочный
(7, 3, 0): К оплате: 350 руб / Груз: стандартный
(0, 1, 0): Ошибка: вес должен быть не меньше 1
(4, 5, 1): Ошибка: зоны с кодом 5 нет
```

Answers to the project questions (also in delivery.cpp comments):
1. Weight check must be before switch because an invalid weight (e.g., 0) should not produce a tariff. Otherwise, weight=0 zone=1 would give a meaningless "К оплате: 50 руб".
2. The condition weight > 5 alone is insufficient. Test (7, 3, 0) has weight > 5 but urgency = 0. The simplified condition would incorrectly print "тяжёлый срочный".