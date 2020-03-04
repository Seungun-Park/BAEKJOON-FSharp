open System

[<EntryPoint>]
let main argv =
    let arr =
        Console.ReadLine().Split()
        |> Array.map int

    let a = arr.[0]
    let b = arr.[1]
    let c = arr.[2]

    Console.WriteLine((a+b)%c)
    Console.WriteLine((a%c+b%c)%c)
    Console.WriteLine((a*b)%c)
    Console.WriteLine((a%c*b%c)%c)
    0