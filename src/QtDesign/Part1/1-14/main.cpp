#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QFileInfo>
#include <QDir>
QTextStream cout(stdout);
QTextStream cerr(stderr);

int main(int argc, char *argv[]) {
    QString str, newstr;
    QTextStream strbuf(&str);

    int lucky = 7;
    float pi = 3.14;
    double e = 2.71;

    cout << "an in-memory--------------------" << Qt::endl;
    strbuf << "luckymember: " << lucky << Qt::endl
           << "pi: " << pi << Qt::endl
           << "e: " << e << Qt::endl;
    cout << str;

    QCoreApplication app(argc, argv); // 创建QCoreApplication实例

    // 获取当前可执行文件的完整路径
    QString appPath = QCoreApplication::applicationFilePath();
    QFileInfo fileInfo(appPath);
    QString dirPath = fileInfo.absoluteDir().path(); // 获取文件所在目录的路径

    // 构建完整的文件路径
    QString fullPath = QDir(dirPath).filePath("./mydata");

    // 使用完整路径创建QFile对象
    QFile data(fullPath);
    data.open(QIODevice::WriteOnly);
    QTextStream out(&data);
    int a(0);
    while (a<100) {
        out << "你好";
        a++;
    }

    data.close();

    cout << "read data from the file exists before attempting to read---------------" << Qt::endl;

    if (data.open(QIODevice::ReadOnly)) {
        QTextStream in(&data);
        int lucky2;
        in >> newstr >> lucky2;
        if (lucky != lucky2)
            cerr << "error wrong " << newstr << lucky2 << Qt::endl;  // 如果lucky和lucky2不相等，打印错误
        else
            cout << newstr << "OK" << lucky2 << Qt::endl;  // 如果相等，打印OK和lucky2的值

        float pi2;
        in >> newstr >> pi2;  // 读取字符串和浮点数
        if (pi2 != pi)
            cerr << "error wrong " << newstr << pi2 << Qt::endl;  // 如果pi和pi2不相等，打印错误
        else
            cout << newstr << "OK" << Qt::endl;  // 如果相等，打印OK

        double e2;
        in >> newstr >> e2;  // 读取字符串和双精度浮点数
        if (e2 != e)
            cerr << "error wrong " << newstr << e2 << Qt::endl;  // 如果e和e2不相等，打印错误
        else
            cout << newstr << "OK " << Qt::endl;  // 如果相等，打印OK

        data.close();  // 关闭文件
    }
    cout << "read from file line by line----------------" << Qt::endl;
    if (data.open(QIODevice::ReadOnly)) {
        QTextStream in(&data);
        while (not in.atEnd()) {
            newstr = in.readLine();
            cout << newstr << Qt::endl;
        }
        data.close();
    }


    return 0;
}

