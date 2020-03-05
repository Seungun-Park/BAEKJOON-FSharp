open System
let bugger = Array.zeroCreate 3
for i in 0 .. bugger.Length - 1 do
    Array.set bugger i (int <| Console.ReadLine())
let drink = Array.zeroCreate 2
for i in 0 .. drink.Length - 1 do
    Array.set drink i (int <| Console.ReadLine())

(Array.min bugger) + (Array.min drink) - 50
|> Console.Write
