#! /bin/sh -e

# $1 - TRAVIS_BUILD_NUMBER
# $2 - BINTRAY_API_KEY

baseurl='https://api.bintray.com/content'
user='vladimirsuvorov'
project='otus-cpp'
name='if_filter'
version="0.0.$1"
package="${name}_${version}_amd64.deb"
params=';deb_distribution=xenial;deb_component=main;deb_architecture=amd64;publish=1'

#echo "$package"
#echo "${user}:$2"
#echo "$baseurl/$user/$project/$name/$version/$package$params"


#https://api.bintray.com/content/
#vsuvorov/
#otus-cpp/
#if_filter/0.0.60/

#pool/main/i/if_filter/

#if_filter_0.0.60_amd64.deb;
#deb_distribution=xenial;deb_component=main;deb_architecture=amd64;publish=1
#"$baseurl/$user/$project/$name/$version/pool/main/${name::1}/$name/$package$params"

curl -T helloworld-0.0.$TRAVIS_BUILD_NUMBER_amd64.deb -uvladimirsuvorov:$BINTRAY_API_KEY "https://api.bintray.com/content/vladimirsuvorov/otus-cpp/if_filter/$TRAVIS_BUILD_NUMBER/if_filter-0.0.$TRAVIS_BUILD_NUMBER_amd64.deb;deb_distribution=trusty;deb_component=main;deb_architecture=amd64;publish=1"

#curl -T "$package" -u "${user}:$2" "$baseurl/$user/$project/$name/$version/$package$params"

#curl -T helloworld-0.0.$TRAVIS_BUILD_NUMBER-Linux.deb -uvladimirsuvorov:$BINTRAY_API_KEY 
#"https://api.bintray.com/content/
#vladimirsuvorov
#/otus-cpp/
#helloworld/$TRAVIS_BUILD_NUMBER/
#helloworld-0.0.$TRAVIS_BUILD_NUMBER-Linux.deb
#;deb_distribution=trusty;deb_component=main;deb_architecture=amd64;publish=1"

