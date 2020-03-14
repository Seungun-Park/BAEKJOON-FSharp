open System
[<EntryPoint>]
let main argv = 
    let prime : bool array = Array.create 1000001 true
    prime.[0] <- false
    prime.[1] <- false
    for i in 2 .. 1000000 do
        if prime.[i] then
            for j in (i + i) .. i .. 1000000 do
                prime.[j] <- false
    let isprime x = prime.[x]
    let input = Console.ReadLine().Split ' ' |> Array.map int
    seq { for i in input.[0] .. input.[1] do if isprime i then yield i }
    |> Seq.map string
    |> String.concat "\n"
    |> Console.Write
    0