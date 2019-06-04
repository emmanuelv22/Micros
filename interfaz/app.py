from flask import Flask,render_template,request
from Lib import random
app = Flask(__name__)


@app.route('/', strict_slashes=False)
def update():
    temperatura= round(random.uniform(0,45),4)
    return render_template("update.html",temper=temperatura)
@app.route('/about')
def about():
    return render_template('about.html')



if __name__ == '__main__':
    app.run(debug=True)