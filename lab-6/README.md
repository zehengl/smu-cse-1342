# lab-6

You are to write a driver program named `PackageTransactionProcessor.cpp` and associated classes (i.e. `Package`, `OvernightPackage`, `TwoDayPackage`) that implement the "Package-Delivery Services".
There are a couple of enhancements to be included:

1. Package information is contained in a file called `PackageInfo.csv`.
   The format of this file is comma-separated values which stores tabular data in plan-text form that are separated by commas.
   The first line of the file includes the field format information - i.e. Customer Id, Package Type, Package Id (i.e. tracking number), Customer Name, Customer Address, Customer City, Customer State, Customer ZIP, Recipient Name, Recipient Address, Recipient City, Recipient State, Recipient ZIP, Package Weight in Ounces, Package Cost/Ounce, Flat Fee or Overnight Fee Per Ounce (this depends on the Package Type).
   You are to use this information for instantiating `Package`, `OvernightPackage`, and `TwoDayPackage` objects.
2. Mailing Labels are to be produced. They are to be written to a file called `MailingLabels.txt` or standard out.

### Sample Run

```
Package 1

Sender:
Mary Brown
3 Main St
Boston, MA 11111

Recipient:
Lou Smith
7 Elm St
New York, NY 22222

Cost: $6.88

Package 2

Sender:
Bill Klein
15 Broadway
Somerville, MA 33333

Recipient:
Lisa George
212 Pine Rd
Cambridge, MA 44444

Cost: $15.12

Package 3

Sender:
Bill Kelly
12 Oak St
Boston, MA 55555

Recipient:
Ed Kelly
91 Main St
Denver, CO 66666

Cost: $19.80

Total shipping cost: $41.80
```

---

## Comiple and Run

    g++ *.cpp

Execute `a.exe` in Windows or `a.out` in Linux/macOS
