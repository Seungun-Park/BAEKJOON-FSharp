open System
let prime : bool array = Array.create 10001 true
let prime_init =
    prime.[0] <- false
    prime.[1] <- false
    for i in 2 .. 10000 do
        if prime.[i] then
            for j in (i + i) .. i .. 10000 do
                prime.[j] <- false
let isprime x = prime.[x]
let goldbach (x : int) =
    let m = x / 2
    let rec proc (i : int) (j : int) =
        if isprime i then
            if isprime j then
                if i + j = x then
                    string(i) + " " + string(j)
                else if i + j < x then
                    proc i (j + 1)
                else
                    proc (i - 1) j
            else
                proc i (j + 1)
        else
            proc (i - 1) j
    proc m m
[<EntryPoint>]
let main argv = 
    [for _ in 1 .. (Console.ReadLine() |> int) do yield (Console.ReadLine() |> int |> goldbach)]
    |> String.concat "\n"
    |> Console.Write
    0