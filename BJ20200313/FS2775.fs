open System
let apt = Array2D.create 15 14 0
let apt_init =
    for i in 1 .. 14 do
        apt.[0, i - 1] <- i
        apt.[i, 0] <- 1
    for i in 1 .. 14 do
        for j in 1 .. 13 do
            apt.[i, j] <- apt.[i, j - 1] + apt.[i - 1, j]
[<EntryPoint>]
let main argv = 
    [for _ in 1 .. int(Console.ReadLine()) do yield apt.[int(Console.ReadLine()), int(Console.ReadLine()) - 1]]
    |> List.map string
    |> String.concat "\n"
    |> Console.Write
    0