#!/bin/bash

cd ./embeddedproto

# Execute protoc on the various *.proto files.
protoc --plugin=protoc-gen-eams=protoc-gen-eams -I../proto --eams_out=../Core/Generated ../proto/reply.proto
protoc --plugin=protoc-gen-eams=protoc-gen-eams -I../proto --eams_out=../Core/Generated ../proto/request.proto
