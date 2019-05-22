#!/bin/sh

echo "配置插件"
pod bin init --bin-url=https://raw.githubusercontent.com/for-example-test/cocoapods-bin-example/master/bin.yml

echo "启动静态服务器"
cd binary-server
npm install
npm start &

echo "install 工程"
cd ..
cd Demo
pod install --verbose
pod bin