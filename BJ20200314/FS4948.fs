open System
open System.Text
let outputStr = new StringBuilder()
let prime : bool array = Array.create 246913 true
let isprime (x:int) = prime.[x]
let prime_init =
    prime.[0] <- false
    prime.[1] <- false
    for i in 2 .. prime.Length - 1 do
        if isprime i then
            for j in (i + i) .. i .. prime.Length - 1 do
                prime.[j] <- false
[<EntryPoint>]
let main argv = 
    prime_init
    let mutable input : int = Console.ReadLine() |> int
    while input <> 0 do
        [for i in (input + 1) .. (input * 2) do if isprime i then yield i]
        |> List.length |> string
        |> outputStr.AppendLine |> ignore
        input <- Console.ReadLine() |> int
    outputStr |> Console.Write
    0