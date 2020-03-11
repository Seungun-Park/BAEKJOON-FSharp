open System
let point a b c =
    if (c - b) <= 0 then -1
    else (a / (c - b)) + 1
[<EntryPoint>]
let main argv = 
     Console.ReadLine().Split ' '
     |> Array.map int
     |> fun x -> point x.[0] x.[1] x.[2]
     |> Console.Write
     0