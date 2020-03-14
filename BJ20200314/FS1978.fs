open System
let arr : bool array = Array.create 1001 true
[<EntryPoint>]
let main argv = 
    arr.[0] <- false
    arr.[1] <- false
    for i in 2 .. 1000 do
        if arr.[i] then
            for j in (i + i) .. i .. 1000 do
                arr.[j] <- false
    Console.ReadLine() |> ignore
    Console.ReadLine().Split ' '
    |> Array.map int
    |> Array.filter (fun x -> arr.[x])
    |> Array.length
    |> Console.Write
    0