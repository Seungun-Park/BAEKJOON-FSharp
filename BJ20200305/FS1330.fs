open System
[<EntryPoint>]
let main argv =
    let arr = 
        Console.ReadLine().Split()
        |> Array.map int
    let x = arr.[0]
    let y = arr.[1]

    if x < y then "<"
    else if x > y then ">"
    else "=="
    |> Console.Write
    0