//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCExpiringData-Protocol.h"

@class NSData, NSDate, NSString;

@interface SCExpiringData : NSObject <SCExpiringData>
{
    _Bool _encrypted;
    id _anObject;
    NSData *_data;
    NSDate *_expirationDate;
    NSString *_clientEncryptionId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSString *clientEncryptionId; // @synthesize clientEncryptionId=_clientEncryptionId;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) id anObject; // @synthesize anObject=_anObject;
@property(readonly, nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEncrypted:(_Bool)arg1 anObject:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 clientEncryptionId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
