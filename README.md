# C++ Workshop Wintersemester 17/18
## Source Code
[Base64 Decoder Header](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/base64.hpp)

[Base64 Decoder](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/base64.cpp)

[Evaluator](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/evaluator.hpp)

[FB Analysis](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/fb_analysis.cpp)

[Utilities Header](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/util.hpp)

[Utilities](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/util.cpp)

[Word Evaluator Header](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/word_evaluator.hpp)

[Word Evaluator](https://raw.githubusercontent.com/cppworkshop/cppworkshop.github.io/master/word_evaluator.cpp)

## Daten
[Testdaten CSV](https://www.dropbox.com/s/giejwiyz60a8prb/wdata_extended.csv?dl=1)

## Datenstruktur

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



