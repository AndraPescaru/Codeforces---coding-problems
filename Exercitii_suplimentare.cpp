1. Implementat, i funct, ia numara_caractere(text: str) -> dict. Funct, ia primes, te ca parametru
un text s, i returneazÄƒ un dict, ionar cu frecvent,a fiecÄƒrui caracter din text. De exemplu,
pentru textul â€™teoria transmisiunii informatieiâ€™, funct, ia returneazÄƒ dict, ionarul {â€™tâ€™: 3, â€™eâ€™:
2, â€™ oâ€™: 2, â€™râ€™: 3, â€™iâ€™: 8, â€™aâ€™: 3, â€™nâ€™: 3, â€™sâ€™: 2, â€™mâ€™: 2, â€™uâ€™: 1, â€™fâ€™: 1, â€™ â€™: 2}.




REZOLVARE:
def numara_caractere(text: str) -> dict:
    
    dict= {}
    for i in range(len(text)):
        if(dict.get(text[i],0)):
            dict[text[i]] += 1
        else:
            dict[text[i]] = 1
    return dict
    





PROBLEMA 2
2. Implementat, i funct, ia gaseste_maxim_aparitii(lista: list) -> tuple. Funct, ia primes, te ca
parametru o listÄƒ de Ã®ntregi s, i returneazÄƒ un tuplu format din numÄƒrul care apare de cele
mai multe ori s, i numÄƒrul sÄƒu de aparit, ii. DacÄƒ existÄƒ mai multe numere care apar de un
numÄƒr maxim de ori se va alege cel mai mic. De exemplu, pentru lista [1, 4, 3, 2, 1, 4],
funct, ia va returna (1, 2).


REZOLVARE

def gaseste_maxim_aparitii(lista: list) -> tuple:
    dict= {}
    for i in range(len(lista)):
        if(dict.get(lista[i],0)):
            dict[lista[i]] += 1
        else:
            dict[lista[i]] = 1
   
    values = list(dict.values())

    maxim = values[0]
    for i in values:
        if(i > maxim):
            maxim = i

    keys = []
    for i in dict :
        if dict[i]==maxim :
            keys.append(i)
    
            minim = keys[0]
    for i in keys:
        if(i < minim):
            minim = i
 
    tuple = (minim , dict[minim])
    return tuple




PROBLEMA 3
3. Implementat, i funct, ia normalizeaza(vector: np.ndarray) -> np.ndarray. Funct, ia primes, te
ca parametru un vector de tip numpy array s, i returneazÄƒ vectorul modificat astfel Ã®ncÃ¢t
media elementelor sÄƒ fie 0 s, i dispersia sÄƒ fie 1.


REZOLVARE

import numpy as np
def normalizeaza(vector: np.ndarray) -> np.ndarray:
    return (vector - np.mean(vector, axis=0))/np.std(vector, axis=0)

    pass



PROBLEMA 4

4. Implementat, i funct, ia vector_in_matrice(matrice: np.ndarray, vector: np.ndarray) -> bool.
Funct, ia primes, te ca parametri o matrice s, i un vector s, i returneazÄƒ True dacÄƒ vectorul se
regÄƒses, te printre liniile matricei, altfel False.



REZOLVARE
import numpy as np

def vector_in_matrice(matrice: np.ndarray, vector: np.ndarray) -> bool:

    for i in range(len(matrice)):
        if(np.array_equal(matrice[i],vector)):
            return True

    return False





PROBLEMA 5
1. Fie matricea de tranziÅ£ie:
T =
ï£®
ï£°
0.25 0.5 0.25
0.5 0.25 0.25
0.25 0.25 0.5
ï£¹
ï£»
Scriet, i un program care afis,eazÄƒ vectorul de probabilitÄƒt, i dupÄƒ 7 iterat, ii, considerÃ¢nd un
vector de probabilitÄƒt, i init, iale P
(0) citit de la tastaturÄƒ.

REZOLVARE
import numpy as np

T = np.asanyarray([[0.25, 0.5, 0.25],
                   [0.5, 0.25, 0.25],
                   [0.25, 0.25, 0.5]])

print(T)

p0 = list(map(float, input() .split()))
print (p0)

p1 = p0 @ T
print(p1)

p7 = p0 @ np.linalg.matrix_power(T, 7)
print (p7)




PROBLEMA 6
2. Fie un vector de probablitÄƒt, i init, iale P
(0) =

1 0 0
s, i matricea de tranziÅ£ie:
T =
ï£®
ï£°
p 1 âˆ’ 2p p
1 âˆ’ 2p p p
p p 1 âˆ’ 2p
ï£¹
ï£»
Scriet, i un program care afis,eazÄƒ cu ce probabilitate a fost transmis al doilea simbol dupÄƒ
5 iterat, ii, considerÃ¢nd variabila p cititÄƒ de la tastaturÄƒ.

REZOLVARE

import numpy as np

p0 = np.asanyarray([1, 0, 0])

p = float(input())

T = np.asanyarray([[(p), (1.0-2.0*p), (p)],
                   [(1.0-2.0*p), (p), (p)],
                   [(p), (p), (1.0-2.0*p)]])

print (T)

p5 = p0 @ np.linalg.matrix_power(T, 5)
print (p5)
print (p5[1])


PROBLEMA 7
3. Fie matricea de tranzit, ie
T =
ï£®
ï£°
0.01 0.98 0.01
0.98 0.01 0.01
0.01 0.01 0.98
ï£¹
ï£»
afis,at, i o listÄƒ cu probabilitÄƒt, ile corespunzÄƒtoare stÄƒrii 3 pentru 8 iterat, ii consecutive, considerÃ¢nd un vector de probabilitÄƒt, i init, iale P
(0) citit de la tastaturÄƒ.


REZOLVARE
import numpy as np

T = np.asanyarray([[0.01, 0.98, 0.01],
                   [0.98, 0.01, 0.01],
                   [0.01, 0.01, 0.98]])

p0 = list(map(float, input() .split()))

lista = np.asanyarray([])

for i in range(8):
    p = p0 @ np.linalg.matrix_power(T, i+1)
    lista = np.append(lista, p[2])
    
for i in range(len(lista)):
        
    print('%.3f' %lista[i], end = ' ')
    



PROBLEMA 8
4. Fie o matrice de tranzit, ie T de dimensiune K Ã— K. ConsiderÃ¢nd probabilitatea init, ialÄƒ a
fiecÄƒrui element ca fiind 1
K
, afis,at, i dacÄƒ se obt, ine convergent,a dupÄƒ N iterat, ii. Se considerÄƒ
cÄƒ aceasta a fost atinsÄƒ dacÄƒ fiecare element al diferent,ei Ã®n modul dintre vectorul de
probabilitÄƒt, i la 2 momente consecutive este mai mic decÃ¢t 10âˆ’3
.
Date de intrare:
Pe prima linie 2 numere Ã®ntregi separate prin spat, iu: N K
Pe urmÄƒtoarele K linii K numere reale separate prin spat, iu, liniile matricii T.
Date de ies, ire:
Pe prima linie True / False (dacÄƒ se atinge sau nu convergent,a dupÄƒ N iterat, ii)


REZOLVARE:

import numpy as np

N, K = map(int, input() .split())

p0 = np.full((K), 1/K)

T = np.asanyarray([])

for i in range(K):
    
    p = list(map(float, input() .split()))
    T = np.concatenate((T , p), axis = 0)
matrix = np.array(T).reshape(K,K)    
     
z1=np.asanyarray([])

for i in range(N):
    p = p0 @ np.linalg.matrix_power(matrix, i)
    z1 = np.concatenate((z1, p), axis = 0)
    
z2 = np.array(z1).reshape(N, K)
z3 = z2.transpose()

control = 0    
diff = 0  
  
for i in range(K):
    
    for j in range(N):
       if j==0 : 
          diff = z3[i][0]
                 
       else:
          diff = z3[i][j] - z3[i][j-1]
                    
       if abs(diff) < pow(10, -3):
         control = True
         
       else: 
         control = False
         
print (control)
        
        
    
    



PROBLEMA 1 LAB3
1. Implementat, i funct, ia:
p1(a: str, p: float) -> Union[float, str]:
Funct, ia returneazÄƒ:
â€¢ DacÄƒ a este â€™CBSâ€™, capacitatea canalului binar simetric pentru o probabilitatea de
eroare p;
â€¢ DacÄƒ a este â€™CBAâ€™, capacitatea canalului binar cu anulÄƒri pentru o probabilitatea de
anulare p;
â€¢ Mesajul â€™Date de intrare invalide!â€™ pentru orice altÄƒ valoarea a lui a sau pentru valori
invalide ale lui p.

REZOLVARE:
from typing import Union
import numpy as np
def p1(a: str, p: float) -> Union[float, str]:

   if np.any(p < 0) or np.any(p > 1):
      raise Exception('Date de intrare invalide!')
   elif (a != 'CBS') and (a != 'CBA'):
      raise Exception('Date de intrare invalide!')
   if a == 'CBS':
      if p == 0 or p == 1:
         c = 1
      else:
         c = (1 + p*np.log2(p) + (1 - p)*np.log2(1 - p))
   else:
         c = 1 - p
   return c
print(p1('laba', 2 ))



PROBLEMA 2 LAB3
2. Implementat, i funct, ia:
p2(lp: List[float]) -> Union[List[float], str]:
Pentru fiecare valoare p din lista de intrÄƒri lp, funct, ia va calcula capacitatea unui canal
ternar simetric cu probabilitatea de transmisiune corectÄƒ 1 âˆ’ p s, i va Ã®ntoarce lista rezultatelor, Ã®n ordinea Ã®n care au fost date. DacÄƒ cel put, in o valoare de intrare este invalidÄƒ,
atunci funct, ia va Ã®ntoarce mesajul â€™Date de intrare invalide!â€™.

REZOLVARE
import numpy as np
from typing import Union, List
def p2(lp: list[float]) -> Union[list[float], str]:
   result = []
   for x in lp:
      if np.any(x < 0) or np.any(x > 1):
         return('Date de intrare invalide!')
      else:
         if x == 0:
            c = np.log2(3)
         elif x == 1:
            c = np.log2(3) - 1
         else:
            c = np.log2(3) + (1 - x) * np.log2(1 - x) + x * np.log2(x / 2)
         result.append(c)
   return result


PROBLEMA 3 LAB3
3. Implementat, i funct, ia:
p3(Î±: float) -> List[float]:
unde Î± = p(x1) pentru un canal Z. Funct, ia returneazÄƒ 3 valori: valoarea informat, iei
mutuale I(X; Y ) pentru probabilitatea datÄƒ, capacitatea canalului precum s, i p(x1) pentru
care se obt, ine capacitatea canalului. Se garanteazÄƒ cÄƒ Î± este Ã®ntre 0 s, i 1 inclusiv.

REZOLVARE
import numpy as np
def trans(a: float):
   if a == 0:
      return 0
   else:
      I = - (a / 2) * np.log2(a / 2) - (1 - (a / 2)) * np.log2(1 - (a / 2)) - a
   return I


def p3(a: float):
   I = trans(a)
   C = trans(2 / 5)
   return [I, C, 2 / 5]





PROBLEMA 4 LAB3
4. Implementat, i funct, ia
p4(Px: float, N: float, W: float) -> float:
Funct, ia returneazÄƒ capacitatea unui canal gaussian; PX reprezintÄƒ puterea pentru semnalul
de intrare, N reprezintÄƒ puterea zgomotului, iar W reprezintÄƒ banda de frecvent,Äƒ.


REZOLVARE
import numpy as np
def p4(Px: float, N: float, W: float) -> float:
    C = W * np.log2(1 + (Px / N))
    return C
print(p4(0.5, 0.5, 0.5))




PROBLEMA 1 LAB 4
Pornind de la algoritmul prezentat Ã®n platformÄƒ, rezolvat, i urmÄƒtoarele exercit, ii.
1. Implementat, i funct, ia:
p1(S: List[str], P: List[float]) -> List[float]
Funct, ia primes, te ca parametri:
â€¢ S - o listÄƒ de simboluri
â€¢ P - o listÄƒ de probabilitÄƒt, i pentru fiecare simbol.
Se garanteazÄƒ:
â€¢ toate simbolurile sunt diferite Ã®ntre ele;
â€¢ cele 2 liste au aceeas, i lungime;
â€¢ suma tuturor probabilitÄƒt, ilor este 1.
Funct, ia codeazÄƒ simbolurile folosind codarea Huffman binarÄƒ s, i returneazÄƒ, Ã®ntr-o listÄƒ,
urmÄƒtoarele 3 valori Ã®n aceastÄƒ ordine:
â€¢ Lungimea medie a cuvÃ¢ntului de cod (calculatÄƒ dupÄƒ formula (4.4));
â€¢ Eficient,a codului (calculatÄƒ dupÄƒ formula (4.7));
â€¢ Valoarea lui K pentru inegalitatea Kraft-McMillan (calculatÄƒ dupÄƒ formula (4.9)).


REZOLVARE
import heapq
import numpy as np
import math
from typing import List

class Node:
    def __init__(self, p, s):
        self.left = None
        self.right = None
        self.prob = p
        self.symbol = s

    def __lt__(self, other):
        return self.prob < other.prob

    def __repr__(self):
        return "Node({}, {}, {})".format(repr([self.prob, self.symbol]), repr(self.left), repr(self.right))

def HuffmanTree(SP):
    pq = []
    for symbol, prob in SP.items():
        pq.append(Node(prob, symbol))
    heapq.heapify(pq)

    while len(pq) > 1:
        n1 = heapq.heappop(pq)
        n2 = heapq.heappop(pq)
        top = Node(n1.prob + n2.prob, n1.symbol + n2.symbol)
        top.left = n1
        top.right = n2
        heapq.heappush(pq, top)
    return pq

def encode(dic_code, root, code):
    if root.left is None and root.right is None:
        dic_code[root.symbol] = code
    else:
        encode(dic_code, root.left, code + '0')
        encode(dic_code, root.right, code + '1')

def p1(S:List[str], P:List[float]) -> List[float]:
    SP = dict((S[i], P[i]) for i in range(len(S)))
    dic_code = dict((S[i], '') for i in range(len(S)))
    PQ = HuffmanTree(SP)
    encode(dic_code=dic_code, root = PQ[0], code='')
    dictionar = {}
    for key in S:
        dictionar[key] = P[S.index(key)]
    # Lungimea medie a cuvantului de cod
    lmed = 0 
    for key in dictionar:
        lmed += dictionar[key] * len(dic_code[key])
    # Eficienta codului
    H = 0
    for key in dictionar:
        H += dictionar[key] * math.log2(dictionar[key])
    H = H*(-1)
    lmin = float(H/math.log2(2))
    # Valoarea lui K pentru inegalitatea Kraft-McMillan
    K = 0
    for key in dictionar:
        K += 2**((-1)*(len(dic_code[key])))
    lista = [lmed, lmin/lmed, K]
    return lista



PROBLEMA 2 LAB 4

2. Implementat, i funct, ia:
p2(S: List[str], P: List[float]) -> float
Funct, ia primes, te ca parametri:
â€¢ S - o listÄƒ de simboluri.
â€¢ P - o listÄƒ de probabilitÄƒt, i pentru fiecare simbol.
Se garanteazÄƒ:
â€¢ toate simbolurile sunt diferite Ã®ntre ele;
â€¢ cele 2 liste au aceeas, i lungime;
â€¢ suma tuturor probabilitÄƒt, ilor este 1.
Funct, ia codeazÄƒ simbolurile folosind codarea Huffman ternarÄƒ s, i returneazÄƒ lungimea medie
a cuvÃ¢ntului de cod (calculatÄƒ dupÄƒ formula (4.4)).
Sfaturi:
â€¢ Modificat, i clasa Node astfel Ã®ncÃ¢t sÄƒ permitÄƒ 3 copii (descendent, i) Ã®n loc de 2.
â€¢ Modificat, i funct, ia HuffmanTree astfel Ã®ncÃ¢t sÄƒ t, inÄƒ cont de relat, ia (4.10) s, i sÄƒ adauge
un nou simbol (0 0) cu probabilitatea 0.0 atunci cÃ¢nd relat, ia nu este Ã®ndeplinitÄƒ.
â€¢ Modificat, i funct, ia HuffmanTree astfel Ã®ncÃ¢t sÄƒ realizeze suma ultimelor 3 noduri cu
cele mai mici probabilitat, i Ã®n loc de suma ultimelor 2.
â€¢ Modificat, i funct, ia encode astfel Ã®ncÃ¢t sÄƒ t, inÄƒ cont cÄƒ un nod poate avea 3 copii
(descendent, i) Ã®n loc de 2.
â€¢ Modificat, i funct, ia encode astfel Ã®ncÃ¢t sÄƒ t, inÄƒ cont cÄƒ poate exista s, i simbolul â€™2â€™ pentru
codare.

REZOLVARE

import math
from typing import List
import heapq
import numpy as np

def is_integer_num(n):
    if isinstance(n, int):
        return True
    if isinstance(n, float):
        return n.is_integer()
    return False
	
class Node:
    def _init_(self, p, s):
        self.left = None
        self.middle = None
        self.right = None
        self.prob = p
        self.symbol = s

    def _lt_(self, other):
        return self.prob < other.prob

    def _repr_(self):
        return "Node({}, {}, {})". format(repr([self.prob, self.symbol]), repr(self.left), repr(self.middle), repr(self.right))

def HuffmanTree(SP):
    pq = []
    for symbol, prob in SP.items():
        pq.append(Node(prob, symbol))
    if not is_integer_num((len(pq) - 3) / 2):
        pq.append(Node(0, ' '))
    heapq.heapify(pq)



    while len(pq) > 1:
        n1 = heapq.heappop(pq)
        n2 = heapq.heappop(pq)
        n3 = heapq.heappop(pq)
        top = Node(n1.prob + n2.prob + n3.prob, n1.symbol + n2.symbol + n3.symbol)
        top.left = n1
        top.middle = n2
        top.right = n3
        heapq.heappush(pq, top)
        #print(pq, '\n')

    return pq

def encode(dic_code, root, code):
    # vom apela recursiv functia pana ajungem la frunze - cele mai mici probabilitati
    # in dic_code se salveaza codul
    if root.left is None and root.middle is None and root.right is None:
        dic_code[root.symbol] = code
    else:
        encode(dic_code, root.left, code + '0')
        encode(dic_code, root.middle, code + '1')
        encode(dic_code, root.right, code + '2')

def getIdx(S: List[str], key):
    try:
        idx = S.index(key)
    except ValueError:
        idx = -1

    return idx

def p2(S: List[str], P: List[float]) -> float:
    SP = dict((S[i], P[i]) for i in range(len(S)))
    dic_code = dict((S[i], '') for i in range(len(S)))
    PQ = HuffmanTree(SP)
    encode(dic_code=dic_code, root=PQ[0], code='')

    probS = {}

    # in probS[key] sunt puse simbolurile si probabilitatile asociate lor
    for key in dic_code:

        if getIdx(S, key) != -1:
            probS[key] = P[S.index(key)] # S.index(key) returneaza index-ul la care se afla key

    # Lungimea medie
    lmed = 0
    for key in probS:
        lmed = lmed + probS[key] * len(dic_code[key])

    return lmed




3. Implementat, i funct, ia:
p4(text: str) -> List[int]
Funct, ia primes, te ca parametru un text.
Funct, ia returneazÄƒ o listÄƒ de 2 Ã®ntregi: numÄƒrul de bit, i necesari codÄƒrii Ã®ntregului text
folosind codarea Huffman binarÄƒ precum s, i numÄƒrul de bit, i necesari codÄƒrii Ã®ntregului text
dacÄƒ fiecare caracter se codeazÄƒ pe dlog2
(n)e bit, i.


REZOLVARE

import heapq
import numpy as np
from typing import List


class Node:
    def _init_(self, p, s):
        self.left = None
        self.right = None
        self.prob = p
        self.symbol = s

    def _lt_(self, other):
        return self.prob < other.prob

    def _repr_(self):
        return "Node({}, {}, {})".format(repr([self.prob, self.symbol]), repr(self.left), repr(self.right))


def HuffmanTree(SP):
    pq = []
    for symbol, prob in SP.items():
        pq.append(Node(prob, symbol))
    heapq.heapify(pq)

    while len(pq) > 1:
        n1 = heapq.heappop(pq)
        n2 = heapq.heappop(pq)
        top = Node(n1.prob + n2.prob, n1.symbol + n2.symbol)
        top.left = n1
        top.right = n2
        heapq.heappush(pq, top)

    return pq


def encode(dic_code, root, code):
    if root.left is None and root.right is None:
        dic_code[root.symbol] = code
    else:
        encode(dic_code, root.left, code + '0')
        encode(dic_code, root.right, code + '1')


def p3(text: str) -> List[int]:
    s=[]
    p=[]
    for litere in text:
        if(litere in s):
            pass
        else: s.append(litere)
        
    for i in s:
        p.append(text.count(i)/len(text))
    SP=dict((s[i],p[i]) for i in range(len(s)))
    dic_code=dict((s[i], '') for i in range(len(s)))
    QP=HuffmanTree(SP)
    encode(dic_code=dic_code, root=QP[0], code='')
    sumi=0
    for i in text:
       sumi+=len(dic_code[i]) 
    
    logul=np.ceil(np.log2(len(s)))*len(text)
    return([sumi,int(logul)])

PROBLEMA 1 LAB 5

1. Implementat, i funct, iile:
h31_encode(text: str) -> np.ndarray
h31_decode(code_matrix: np.ndarray) -> str
Funct, ia h31_encode primes, te ca parametru un text format doar din caracterele â€™0â€™, â€™1â€™ s, i
returneazÄƒ o matrice Ã®n care fiecare linie reprezintÄƒ codarea caracterului respectiv folosind
un cod Hamming(3, 1).
Funct, ia h31_decode primes, te ca parametru o matrice Ã®n care fiecare linie reprezintÄƒ codarea
unui caracter folosind un cod Hamming(3, 1) (codarea este afectatÄƒ de cel mult 1 eroare)
s, i Ã®ntoarce textul decodat.




REZOLVARE
import numpy as np
import random


class codH31:
    def __init__(self):
        self.n = 3
        self.k = 1
        self.m = self.n - self.k
        self.H = ([0, 1, 1],
                  [1, 0, 1])

    def __repr__(self):
        return 'Matricea de control pentru codul H(3,1):\n' \
               '{}'.format(repr(self.H))

    def codare(self, i):
        i3 = i
        c1 = i3 % 2
        c2 = i3 % 2
        return np.array([c1, c2, i3])

    def detectie_erori(self, v_rec):
        z = np.mod(np.matmul(self.H, v_rec), 2)
        return (z == np.zeros(shape=(self.m,))).all()

    def corectie_erori(self,v_rec):
        z = np.mod(np.matmul(self.H, v_rec), 2)
        if (z == np.zeros(shape=(self.m,))).all():
            return v_rec
        else:
            cuvant_eroare_estimat = np.zeros(shape=(self.n,), dtype=int)
            pozitie_eroare_estimata = bin2dec(z)
            cuvant_eroare_estimat[pozitie_eroare_estimata-1] = 1
            v_corectat = np.mod(v_rec + cuvant_eroare_estimat, 2)
            return v_corectat


def bin2dec(a):
    b = 0
    for p in range(len(a)):
        b += a[-p-1]*(2**p)
    return int(b)


def transmitere_canal(v, e):
    cuvant_eroare = np.zeros(shape=(len(v),), dtype=int)
    pozitie_eronata = random.sample(range(len(v)), k=e)
    cuvant_eroare[pozitie_eronata] = 1
    v_rec = np.mod(v + cuvant_eroare, 2)
    return v_rec


cod = codH31()


def h31_encode(text : str):
    i1 = []
    for c in text:
        i1.append(int(c))
    code_matrix = np.zeros([len(text), 3])
    ctr = 0
    for i in i1:
        code_matrix[ctr,:] = cod.codare(i)
        ctr += 1
    return code_matrix


def h31_decode(code_matrix):
    e = 0
    i_decodare=''
    for i in range(len(code_matrix)):
        v_rec = transmitere_canal(code_matrix[i,:], e)
        v_corectat = cod.corectie_erori(v_rec)
        i_decodare = i_decodare+str(int(v_corectat[2]))
    return i_decodare






PROBLEMA 2 LAB 5

2. Implementat, i funct, iile:
h84_encode(text: str) -> np.ndarray
h84_decode(code_matrix: np.ndarray) -> str
Funct, ia h84_encode primes, te ca parametru un text format doar din primele 16 litere mari
ale alfabetului englezesc (de la â€™Aâ€™ la â€™Pâ€™) s, i returneazÄƒ o matrice Ã®n care fiecare linie
reprezintÄƒ codarea literei respective folosind un cod Hamming(8, 4).
Funct, ia h84_decode primes, te ca parametru o matrice Ã®n care fiecare linie reprezintÄƒ codarea
unui caracter folosind un cod Hamming(8, 4) (codarea este afectatÄƒ de cel mult 2 erori) s, i
Ã®ntoarce textul decodat. DacÄƒ un cod este afectat de 2 erori, se va decoda Ã®n caracterul â€™*â€™.


REZOLVARE


import numpy as np
import random


class codH84():
    def __init__(self):
        self.n = 8
        self.k = 4
        self.m = self.n - self.k
        self.H = np.array([[0, 0, 0, 1, 1, 1, 1, 0],
                           [0, 1, 1, 0, 0, 1, 1, 0],
                           [1, 0, 1, 0, 1, 0, 1, 0],
                           [1, 1, 1, 1, 1, 1, 1, 1]])


    def __repr__(self):
        return'Matricea de control pentru codul H(3,1):\n{}'.format(repr(self.H))

    def codare(self,i):
        [i3, i5, i6, i7]=i
        c1=i3+i5+i7
        c2=i3+i6+i7
        c4=i5+i6+i7
        c8 = i3+i5+i6
        return np.array([c1,c2,i3,c4,i5,i6,i7,c8])

    def detectie_erori(self, v_rec):
        z = np.mod(np.matmul(self.H, v_rec), 2)
        if z[0]+z[1]+z[2]+z[3] == 0:
            return 0
        elif z[3] == 1:
            return 1
        else:
            return 2
    def corectie_erori(self, v_rec):
        z=np.mod(np.matmul(self.H,v_rec),2)
        if(z==np.zeros(shape=(self.m,))).all():
            return v_rec
        else:
            cuvant_eroare_estimat=np.zeros(shape=(self.n,),dtype=int)
            z=np.delete(z,-1)
            pozitie_eroare_estimata = bin2dec(z)
            cuvant_eroare_estimat[pozitie_eroare_estimata-1]=1
            v_corectat=np.mod(v_rec+cuvant_eroare_estimat,2)
            return v_corectat


def bin2dec(a):
    b = 0
    for p in range(len(a)):
        b += a[-p-1] * (2**p)
    return np.int32(b)


def h84_encode(text:str) -> np.ndarray :
    alfabet = {
        'A': np.array([0,0,0,1]),
        'B': np.array([0,0,1,0]),
        'C': np.array([0,0,1,1]),
        'D': np.array([0,1,0,0]),
        'E': np.array([0,1,0,1]),
        'F': np.array([0,1,1,0]),
        'G': np.array([0,1,1,1]),
        'H': np.array([1,0,0,0]),
        'I': np.array([1,0,0,1]),
        'J': np.array([1,0,1,0]),
        'K': np.array([1,0,1,1]),
        'L': np.array([1,1,0,0]),
        'M': np.array([1,1,0,1]),
        'N': np.array([1,1,1,0]),
        'O': np.array([1,1,1,1]),
        'P': np.array([0,0,0,0])
    }
    cod = codH84()
    resp = np.zeros([len(text),8])
    i = 0
    for el in text:
        info = alfabet[el]
        v = cod.codare(info)
        resp[i] = v
        i = i+1
    return resp

def h84_decode(code_matrix: np.ndarray) -> str :
    alfabet = {
        'A': np.array([0, 0, 0, 1]),
        'B': np.array([0, 0, 1, 0]),
        'C': np.array([0, 0, 1, 1]),
        'D': np.array([0, 1, 0, 0]),
        'E': np.array([0, 1, 0, 1]),
        'F': np.array([0, 1, 1, 0]),
        'G': np.array([0, 1, 1, 1]),
        'H': np.array([1, 0, 0, 0]),
        'I': np.array([1, 0, 0, 1]),
        'J': np.array([1, 0, 1, 0]),
        'K': np.array([1, 0, 1, 1]),
        'L': np.array([1, 1, 0, 0]),
        'M': np.array([1, 1, 0, 1]),
        'N': np.array([1, 1, 1, 0]),
        'O': np.array([1, 1, 1, 1]),
        'P': np.array([0, 0, 0, 0])
    }
    cod = codH84()
    resp = ''
    for el in code_matrix:
        if cod.detectie_erori(el) == 2:
            resp += '*'
        else:
            corectat = cod.corectie_erori(el)
            info = [int(corectat[2]), int(corectat[4]), int(corectat[5]), int(corectat[6])]
            for el in alfabet:
                if np.array_equal(alfabet[el], info):
                    resp = resp + el
    return resp


PROBLEMA LAB 6

1. Se considerÄƒ polinomul generator g1(X) = 1 + X + X3
s, i codare Ã®n formÄƒ sistematicÄƒ.
Implementat, i funct, iile:
g1_encode(text: str) -> np.ndarray
g1_decode(code_matrix: np.ndarray) -> str
Funct, ia g1_encode primes, te ca parametru un text format doar din primele 16 litere mari
ale alfabetului englezesc (de la â€™Aâ€™ la â€™Pâ€™; â€™Aâ€™ va fi codat ca â€™0000â€™, â€™Bâ€™ va fi codat ca â€™0001â€™,
... P va fi codat ca â€™1111â€™) s, i returneazÄƒ o matrice Ã®n care fiecare linie reprezintÄƒ codarea
caracterului respectiv folosind un cod Hamming avÃ¢nd ca polinom generator g1(X).
Funct, ia g1_decode primes, te ca parametru o matrice Ã®n care fiecare linie reprezintÄƒ codarea
unui caracter (codarea este afectatÄƒ de cel mult 1 eroare) s, i Ã®ntoarce textul decodat.


import numpy as np

def grad(p):
    # np.polyld considera putere maxima pe prima pozitie in vector
    p = np.poly1d(np.flipud(p))
    return p.order

def X(m):
    # reprezinta X^m --> [ 0 0 ... 0 1]
    X = np.zeros(m+1, dtype=int)
    X[m] = 1
    return X


def cautare_dict(dictionary, cod_cautat):
    for lit, cod in dictionary.items():  # for name, age in dictionary.iteritems():  (for Python 2.x)
       # print("cod", cod)
       # print("cod_cautat", cod_cautat)
        if np.allclose(cod, cod_cautat):
            return lit

    return np.array([-1, -1, -1, -1])


class GF2m:
    def __init__(self, g):
        self.g = g
        self.m = grad(g)
        self.n = np.power(2, self.m) - 1
        self.k = self.n - self.m
        self.p = self.adunare_polinoame(X(self.n), X(0)) # X^n + 1
        (self.h, _) = self.divizare_polinoame(self.p, self.g)

    def adunare_polinoame(self, a, b):
        s = np.mod(np.flipud(np.polyadd(np.flipud(a), np.flipud(b))), 2)
        return s.astype(int)

    def inmultire_polinoame(self, a, b):
        p = np.mod(np.flipud(np.polymul(np.flipud(a), np.flipud(b))), 2)
        # In algebra polinoamelor modulo (X^n + 1), X^n = X^0, X^(n+1) = X^1, ...
        # s.a.m.d

        if grad(p) > self.n - 1:
            for i in range(self.n, grad(p) + 1):
                p[i - self.n] = np.mod(p[i - self.n] + p[i], 2)
                p[i] = 0

        p = p[0:grad(p)+1]

        return p

    def divizare_polinoame(self, a, b):
        #np.flipud(a)
        (cat, rest) = np.polydiv(np.flipud(a), np.flipud(b))
        cat = np.mod(np.flipud(cat), 2)
        rest = np.mod(np.flipud(rest), 2)
        return cat.astype(int), rest.astype(int)

    def gasire_polinomXk(self, rest):
        for i in range(0, 7):
            (c, r) = self.divizare_polinoame(X(i), self.g)
            rest = self.adunare_polinoame(rest, np.zeros(7))
            r = self.adunare_polinoame(r, np.zeros(7))
            if np.allclose(rest, r):
                return X(i)

        return np.array([0])


def g1_encode(text: str) -> np.ndarray:
    g = np.array([1, 1, 0, 1])  # 1 + X + X^3
    gf2m = GF2m(g)
    alfabet = {
        'A': np.array([0, 0, 0, 0]),
        'B': np.array([0, 0, 0, 1]),
        'C': np.array([0, 0, 1, 0]),
        'D': np.array([0, 0, 1, 1]),
        'E': np.array([0, 1, 0, 0]),
        'F': np.array([0, 1, 0, 1]),
        'G': np.array([0, 1, 1, 0]),
        'H': np.array([0, 1, 1, 1]),
        'I': np.array([1, 0, 0, 0]),
        'J': np.array([1, 0, 0, 1]),
        'K': np.array([1, 0, 1, 0]),
        'L': np.array([1, 0, 1, 1]),
        'M': np.array([1, 1, 0, 0]),
        'N': np.array([1, 1, 0, 1]),
        'O': np.array([1, 1, 1, 0]),
        'P': np.array([1, 1, 1, 1]),
    }

    M = np.zeros((len(text), 7), dtype=int)
    j = 0
    for lit in text:
        xi = gf2m.inmultire_polinoame(X(3), np.flipud(alfabet[lit]))
        (c1, r1) = gf2m.divizare_polinoame(xi, g)
        M[j] = gf2m.adunare_polinoame(gf2m.adunare_polinoame(r1, xi), np.zeros(7))
        j = j + 1

    return M

def g1_decode(code_matrix: np.ndarray) -> str:
    g = np.array([1, 1, 0, 1])  # 1 + X + X^3
    gf2m = GF2m(g)
    alfabet = {
        'A': np.array([0, 0, 0, 0]),
        'B': np.array([0, 0, 0, 1]),
        'C': np.array([0, 0, 1, 0]),
        'D': np.array([0, 0, 1, 1]),
        'E': np.array([0, 1, 0, 0]),
        'F': np.array([0, 1, 0, 1]),
        'G': np.array([0, 1, 1, 0]),
        'H': np.array([0, 1, 1, 1]),
        'I': np.array([1, 0, 0, 0]),
        'J': np.array([1, 0, 0, 1]),
        'K': np.array([1, 0, 1, 0]),
        'L': np.array([1, 0, 1, 1]),
        'M': np.array([1, 1, 0, 0]),
        'N': np.array([1, 1, 0, 1]),
        'O': np.array([1, 1, 1, 0]),
        'P': np.array([1, 1, 1, 1]),
    }

    #M = np.zeros((len(text), 7), dtype=int)
    dtext = ''
    j = 0
    for code in code_matrix:
        (c1, r1) = gf2m.divizare_polinoame(code, g)
       # z = r1
        v = gf2m.adunare_polinoame(code, gf2m.gasire_polinomXk(r1))
        (c2, r2) = gf2m.divizare_polinoame(v, g)

        (inf, x) = np.array_split(np.flipud(v), 2)
        dtext = dtext + cautare_dict(alfabet, inf)

    return dtext
