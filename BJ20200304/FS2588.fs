open System

[<EntryPoint>]
let main argv =
    let a =
        Console.ReadLine() |> int
    let b =
        Console.ReadLine() |> int

    Console.WriteLine(a*(b%10))
    Console.WriteLine(a*((b%100)/10))
    Console.WriteLine(a*(b/100))
    Console.WriteLine(a*b)
    0