//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol EXP_HUBMutableJSONPath
- (id <EXP_HUBJSONPath>)copy;
- (id <EXP_HUBJSONDictionaryPath>)dictionaryPath;
- (id <EXP_HUBJSONURLPath>)URLPath;
- (id <EXP_HUBJSONStringPath>)stringPath;
- (id <EXP_HUBJSONIntegerPath>)integerPath;
- (id <EXP_HUBJSONBoolPath>)boolPath;
- (id <EXP_HUBMutableJSONPath>)combineWithPath:(id <EXP_HUBMutableJSONPath>)arg1;
- (id <EXP_HUBMutableJSONPath>)runBlock:(id (^)(NSObject *))arg1;
- (id <EXP_HUBMutableJSONPath>)forEach;
- (id <EXP_HUBMutableJSONPath>)goTo:(NSString *)arg1;
@end

