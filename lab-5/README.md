# lab-5

You are to write a driver program named `PackageTester.cpp` and associated classes (i.e. `Package`, `OvernightPackage`, `TwoDayPackage`) that implement the "Package-Delivery Services".

---

## Test Cases

### Package

```
  From:
   Mary Brown
   3 Main St
   Boston
   MA
   11111
  To:
   Lou Smith
   127 Elm St
   New York
   NY
   22222
  Weight: 12.5 oz
  Cost Per Ounce: $0.55
  Cost = Weight * Cost Per Ounce
  Cost for this Test Case = $6.88
```

### OvernightPackage

```
  From:
    Bill Kelly
    12 Oak St
    Boston
    MA
    55555
  To:
    Ed Kelly
    91 Main St
    Denver
    CO
    66666,
  Weight: 16.5 oz
  Cost Per Ounce:  $0.75
  Overnight Fee Per Ounce: $0.45
  Cost = Weight * (Cost Per Ounce + Overnight Fee Per Ounce)
  Cost for this Test Case = $19.80
```

### TwoDayPackage

```
  From:
    Bill Klein
    15 Broadway
    Somerville
    MA
    33333
  To:
    Lisa George
    212 Pine Rd
    Cambridge
    MA
    44444
  Weight: 17.5 oz
  Cost Per Ounce:  $0.75
  Flat Fee: $2.00
  Cost = (Weight * Cost Per Ounce) + Flat Fee
  Cost for this Test Case = $15.12
```

---

## Comiple and Run

    g++ *.cpp

Execute `a.exe` in Windows or `a.out` in Linux/macOS
