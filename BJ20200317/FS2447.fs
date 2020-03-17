open System
open System.Text
let outputStr = new StringBuilder()
let star = Array2D.create 6561 6561 ' '
let rec star_proc i j x =
    let nex = x / 3
    if x = 3 then
        star.[i, j] <- '*'
        star.[i, j + 1] <- '*'
        star.[i, j + 2] <- '*'
        star.[i + 1, j] <- '*'
        star.[i + 1, j + 2] <- '*'
        star.[i + 2, j] <- '*'
        star.[i + 2, j + 1] <- '*'
        star.[i + 2, j + 2] <- '*'
    else
        star_proc i j nex
        star_proc i (j + nex) nex
        star_proc i (j + (nex * 2)) nex
        star_proc (i + nex) j nex
        star_proc (i + nex) (j + nex * 2) nex
        star_proc (i + nex * 2) j nex
        star_proc (i + nex * 2) (j + nex) nex
        star_proc (i + nex * 2) (j + nex * 2) nex

[<EntryPoint>]
let main argv = 
    let x = Console.ReadLine() |> int
    star_proc 0 0 x |> ignore
    for i in 0 .. x - 1 do
        for j in 0 .. x - 1 do
            outputStr.Append star.[i, j] |> ignore
        outputStr.Append "\n" |> ignore
    outputStr |> Console.Write
    0