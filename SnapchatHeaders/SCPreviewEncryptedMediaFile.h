//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCPreviewEncryptedMediaFile-Protocol.h"

@class NSData, NSString, NSURL;

@interface SCPreviewEncryptedMediaFile : NSObject <SCPreviewEncryptedMediaFile>
{
    _Bool _isPrivate;
    _Bool _hasOptimizedForNetworkUse;
    NSData *_key;
    NSData *_iv;
    NSURL *_mediaFileURL;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) _Bool hasOptimizedForNetworkUse; // @synthesize hasOptimizedForNetworkUse=_hasOptimizedForNetworkUse;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) NSURL *mediaFileURL; // @synthesize mediaFileURL=_mediaFileURL;
@property(readonly, copy, nonatomic) NSData *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSData *key; // @synthesize key=_key;
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
- (id)initWithKey:(id)arg1 iv:(id)arg2 mediaFileURL:(id)arg3 isPrivate:(_Bool)arg4 hasOptimizedForNetworkUse:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
