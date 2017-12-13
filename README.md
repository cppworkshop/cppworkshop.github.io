# C++ Workshop Wintersemester 17/18
## Source Code
[Base64 Decoder Header](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/base64.hpp)

[Base64 Decoder](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/base64.cpp)

## Daten
[Testdaten CSV](https://www.dropbox.com/s/giejwiyz60a8prb/wdata_extended.csv?dl=1)

## Datenformat
In der Datei wdata.csv sind Facebook-Kommentare der 10 größten deutschen Facebook-Setien der letz-
ten paar Jahre enthalten.

**Datenformat 1.1.** Das Datenformat (CSV) der Spieldaten ist ein sehr simples, aber weit verbeitetes. Es
ist bietet sich häufig an z. B. Messdaten zunächst als CSV-Datei abzulegen, um sie anschließend weiterzu-
verarbeiten. Die Daten im CSV-Format bestehen aus einer festen Anzahl Spalten und beliebig vielen Zeilen.
Die Zellen jeder Zeile sind durch einen (vorher festgelegten) Delimiter getrennt, die Zeilen durch einen
Zeilenumbruch (’\n’). Das Format das Spieldaten ist folgendermaßen strukturiert:


| Delimiter ,        |||
| ------------- |:-------------:| -----:|
| Spalten     | 1 → Zeilennummer | 6 |
|      | 2 → Kommentar-ID |   10155673894209407_10155674088994407 |
|  | 3 → Kommentar (Base64-kodiert)      |    QmVpIEthbmF ... i4= |
|  | 4 → Erstellungszeitpunkt des Kommentars     |    2017-07-26 15:22:29 |
|  | 5 → Erstellername (Base64-kodiert)     |    QXJtaW4gS3JhZnQ= |
|  | 6 → Ersteller-ID    |    10214827725509292 |
|  | 7 → ID des Posts, der kommentiert wurde    |    193081554406_10155043685614407 |
|  | 8 → Seitenname    |    tagesschau |
|  | 9 → Anzahl, wie oft der Post geteilt wurde    |    5136 |
|  | 10 → Post-Typ  |    video |
|  | 11 → Erstellungszeitpunkt des Posts    |    2017-02-02 04:30:00 |

Eine Zeile in der Datei sähe daher so aus:

`8,10155673894209407_10155674088994407,QmVpIEthbmF ... i4=,
2017-07-26 15:22:29,QXJtaW4gS3JhZnQ=,10214827725509292,193081554406_10155043685614407,
tagesschau,5136,video,2017-02-02 04:30:00`

**Datenformat 1.2.** Die Kommentare selbst sind Base64 enkodiert, damit eventuell auftauchende Zeichen
wie ; und " nicht Probleme bereiten beim einlesen der Datei. Diese lassen mit Funktionen aus den Dateien
base64.hpp und base64.cpp dekodieren.


## Folien und Beispiele

[**Folien**](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/workshop.pdf)

### Beispiele

[Hello World](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/hello_world.cpp)

[If-Else](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/n_if.cpp)

[While](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/fib_while.cpp)

[Iterieren und Vektoren](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/iterate.cpp)
