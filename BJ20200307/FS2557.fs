open System
let count (x:int) =
    let cnt = Array.zeroCreate 10
    let rec numcount (num:int) =
        if num < 10 then
            cnt.[num] <- cnt.[num] + 1
        else
            cnt.[num%10] <- cnt.[num%10] + 1
            numcount (num/10)
    numcount x |>ignore
    cnt
[for _ in 1 .. 3 do yield Console.ReadLine()]
|> List.map int
|> fun x -> x.[0] * x.[1] * x.[2]
|> count
|> Array.map string
|> String.concat "\n"
|> Console.Write