open System
let calc (x:double) =
    let n = sqrt x |> ceil
    if ((n*n) + ((n-1.0)*(n-1.0))) / 2.0 < x then
        n * 2.0 - 1.0 |> uint64
    else
        n * 2.0 - 2.0 |> uint64
[<EntryPoint>]
let main argv = 
     [for _ in 1 .. int(Console.ReadLine()) do yield Console.ReadLine().Split ' ' |> Array.map double |> fun x -> calc (x.[1] - x.[0])]
     |> List.map string
     |> String.concat "\n"
     |> Console.Write
     0