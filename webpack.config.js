const path = require('path')

module.exports = {
  entry: {
    bmi: './lib/js/src/bmi/app.js'
  },
  output: {
    path: path.join(__dirname, 'bundledOutputs'),
    filename: '[name].js'
  }
}
