# lab-3

You are to write a program named `program3.cpp` that implements "The Tortoise and the Hare" simulation.
Use pointer-based pass-by-reference to modify the position of the tortoise and the hare in the `moveTortoise` and `moveHare` functions.
Remember to print (via a `printCurrentPositions` pointer-based pass-by-reference function) the position of the Tortoise and Hare after each simulated clock tick.

## Design

The function prototypes/interface for this effort are:

```
// Prototypes
void moveTortoise( int *const ); // Progress for the Tortoise
void moveHare( int *const ); // Progress for the Hare
void printCurrentPositions( const int *const, const int *const ); // Display new Positions
```

### Sample RUn

```
ON YOUR MARK, GET SET
BANG               !!!!
AND THEY'RE OFF    !!!!
H  T
H   T
 H     T
  H       T
           H T
         H      T
         H       T
         H          T
         H    T
       H       T
     H          T
          T   H
    T          H
   H   T
 T  H
OUCH!!!
     T       H
T            H
   T       H
      T     H
T           H
 T           H
T          H
   T     H
T         H
 T        H
T          H
T           H
T            H
 T         H
    T      H
     T     H
T          H
 T         H
  T                 H
     T               H
      T              H
       T              H
          T                    H
             T                          H
       T                              H
 T                        H
    T                   H
T                       H
   T                     H
      T                   H
         T                 H
            T            H
               T          H
         T                         H
            T                               H
             T                  H
       T                         H
        T                         H
         T                      H
            T                 H
               T            H
         T      H
            T            H
      T                   H
       T                   H
          T              H
           T H
             HT
 H             T
          H       T
            T      H
               T   H
                 HT
               H   T
               H    T
                       TH
                        T        H
                           T              H
                            T             H
                               T           H
                                T          H
                                   T     H
                                      T   H
                              H          T
                              H             T
                               H               T
                                H                 T
                    H                                T
        H                                             T
      H                                                T
H                                                         T
H                                                          T
H                                                           T
H                                                            T
 H                                                            T
  H                                                     T
   H                                                       T
    H                                                         T
  H                                                              T
           H                                                      T
                    H                                              T
                  H                                                  T

TORTOISE WINS!!! YAY!!!
TIME ELAPSED = 98 seconds
```

---

## Comiple and Run

    g++ program3.cpp

Execute `a.exe` in Windows or `a.out` in Linux/macOS
