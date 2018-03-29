//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString, SCWebProxyRequestMetadata;

@interface SCWebProxyRequest : NSObject <NSCopying>
{
    NSString *_uuid;
    SCWebProxyRequestMetadata *_metadata;
    NSDictionary *_headers;
    long long _method;
}

@property(readonly, nonatomic) long long method; // @synthesize method=_method;
@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, copy, nonatomic) SCWebProxyRequestMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUuid:(id)arg1 metadata:(id)arg2 headers:(id)arg3 method:(long long)arg4;

@end

