object Main {

    def main(args: Array[String]) {

        var g = 0
        val input = scala.io.StdIn.readLine()
        val Array(x, y, z) = input split " " map (_.toInt)
        
        if(x > y) g = x
        else g = y
        if(z > g) g = z
        print(g + " eh o maior\n")
    }

}
