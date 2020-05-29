////////////////////////////////////////////////////////////////////////////
//
// Copyright 2020 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RLMBSON;

/// Options to use when executing a `find` command on a `RLMMongoCollection`.
@interface RLMFindOptions : NSObject

/// The maximum number of documents to return.
@property (nonatomic, nullable) NSNumber *limit NS_REFINED_FOR_SWIFT;

/// Limits the fields to return for all matching documents.
@property (nonatomic, nullable) id<RLMBSON> projectionBson NS_REFINED_FOR_SWIFT;

/// The order in which to return matching documents.
@property (nonatomic, nullable) id<RLMBSON> sortBson NS_REFINED_FOR_SWIFT;

- (instancetype)initWithLimit:(NSNumber * _Nullable)limit
               projectionBson:(id<RLMBSON> _Nullable)projectionBson
                     sortBson:(id<RLMBSON> _Nullable)sortBson
NS_SWIFT_UNAVAILABLE("Please see FindOption");

@end

NS_ASSUME_NONNULL_END
