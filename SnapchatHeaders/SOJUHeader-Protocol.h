//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUSignedPayload;

@protocol SOJUHeader <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *connSeqNum;
@property(readonly, copy, nonatomic) SOJUSignedPayload *auth;
@property(readonly, copy, nonatomic) NSNumber *isv3;
@property(readonly, copy, nonatomic) NSString *convId;
@property(readonly, copy, nonatomic) NSArray *to;
@property(readonly, copy, nonatomic) NSString *from;
@end

