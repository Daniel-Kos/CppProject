# Lesson 10 Report

## Task 1 Predictions
A=0 B=0 &&=0 || =0
A=0 B=1 &&=0 || =1
A=1 B=0 &&=0 || =1
A=1 B=1 &&=1 || =1

## Task 2 Predictions
x=5: 0<x<10 = 1, correct = 1
x=-5: 0<x<10 = 1, correct = 0

## Task 3 Predictions
**Test 1 (Age 30, Pass 7):**
Adult: 1
Access: 1
Discount: 0
Deny: 0
De Morgan match: 1 1

**Test 2 (Age 70, Pass 0):**
Adult: 1
Access: 0
Discount: 1
Deny: 1
De Morgan match: 0 0

## "If it was easy" Table (Age, Pass -> Access, Deny)
| Age | Pass | Access | Deny |
| :--- | :--- | :--- | :--- |
| 30 | 1 | 1 | 0 |
| 30 | 0 | 0 | 1 |
| 10 | 1 | 0 | 1 |
| 70 | 0 | 0 | 1 |
*Observation: Access and Deny are always opposites. De Morgan expressions always match (both 1 or both 0).*