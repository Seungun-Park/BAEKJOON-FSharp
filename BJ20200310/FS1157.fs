open System
let s = Console.ReadLine().ToUpper() |> Seq.toList |> List.map int
let arr : int array = Array.zeroCreate 26
for e in s do arr.[e-65] <- arr.[e-65] + 1
let mutable c = 'a'
let mutable cnt = 0
for i in 0 .. 25 do
    if arr.[i] > cnt then
        c <- char(i + 65)
        cnt <- arr.[i]
    else if arr.[i] = cnt then
        c <- '?'
c |> Console.Write