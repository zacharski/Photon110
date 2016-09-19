var ISSChatApp = angular.module('ISSChatApp', []);

ISSChatApp.controller("ChatController", function($scope) {
        var socket = io.connect('https://' + document.domain + ':' + location.port + '/iss');

        //var socket = io.connect();

        $scope.messages = [];
        $scope.name = '';
        $scope.text = '';
        
        socket.on('connect', function () {
          console.log('connected');
          //$scope.setName();
        });
        
        socket.on('message', function (msg) {
          console.log(msg);
          $scope.messages.push(msg);
          $scope.$apply();
          var elem = document.getElementById('msgpane');
          elem.scrollTop = elem.scrollHeight;
        });

        $scope.send = function send() {
          console.log('Sending message:', $scope.text);
          socket.emit('message', $scope.text);
          $scope.text = '';
        };


        $scope.setName2 = function setName2() {
          
          socket.emit('identify', $scope.name2);
          $scope.name = $scope.name2;
          $scope.$apply();
        };
        
        
        
       });

