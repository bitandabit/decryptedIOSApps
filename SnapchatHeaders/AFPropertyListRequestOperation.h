//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPRequestOperation.h"

@class NSError;

@interface AFPropertyListRequestOperation : AFHTTPRequestOperation
{
    id _responsePropertyList;
    unsigned long long _propertyListReadOptions;
    unsigned long long _propertyListFormat;
    NSError *_propertyListError;
}

+ (_Bool)canProcessRequest:(id)arg1;
+ (id)acceptableContentTypes;
+ (id)propertyListRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSError *propertyListError; // @synthesize propertyListError=_propertyListError;
@property(nonatomic) unsigned long long propertyListFormat; // @synthesize propertyListFormat=_propertyListFormat;
@property(nonatomic) unsigned long long propertyListReadOptions; // @synthesize propertyListReadOptions=_propertyListReadOptions;
@property(retain, nonatomic) id responsePropertyList; // @synthesize responsePropertyList=_responsePropertyList;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)error;
- (id)initWithRequest:(id)arg1;

@end

