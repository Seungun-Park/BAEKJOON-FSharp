open System
let proc =
    let LCS = Array2D.create 1000 1000 -1
    let str1 = Console.ReadLine().ToCharArray()
    let str2 = Console.ReadLine().ToCharArray()
    let rec calc (x : int) (y : int) =
        if x = str1.Length || y = str2.Length then 0
        else if str1.[x] = str2.[y] then 1 + calc (x + 1) (y + 1)
        else if LCS.[x, y] <> -1 then LCS.[x, y]
        else
            let tmp = [|calc (x + 1) y; calc x (y + 1)|] |> Array.max
            LCS.[x, y] <- tmp
            tmp
    calc 0 0
[<EntryPoint>]
let main argv = 
    proc |> Console.Write
    0