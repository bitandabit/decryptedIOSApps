//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface SCFideliusUserIdentity : NSObject <NSCoding>
{
    NSString *_hashedBeta;
    NSData *_outBeta;
    NSData *_inBeta;
    NSString *_iwek;
    long long _version;
}

@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *iwek; // @synthesize iwek=_iwek;
@property(copy, nonatomic) NSData *inBeta; // @synthesize inBeta=_inBeta;
@property(copy, nonatomic) NSData *outBeta; // @synthesize outBeta=_outBeta;
@property(copy, nonatomic) NSString *hashedBeta; // @synthesize hashedBeta=_hashedBeta;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)betaFideliusObj;
- (id)initWithHashedBeta:(id)arg1 outBeta:(id)arg2 inBeta:(id)arg3 iwek:(id)arg4 version:(long long)arg5;

@end

