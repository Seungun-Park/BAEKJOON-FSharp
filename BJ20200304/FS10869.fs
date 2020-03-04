open System

[<EntryPoint>]
let main argv = 
    let arr =
        Console.ReadLine().Split()
        |> Array.map int
    printfn "%A" (arr.[0] + arr.[1])
    printfn "%A" (arr.[0] - arr.[1])
    printfn "%A" (arr.[0] * arr.[1])
    printfn "%A" (arr.[0] / arr.[1])
    printfn "%A" (arr.[0] % arr.[1])
    0
