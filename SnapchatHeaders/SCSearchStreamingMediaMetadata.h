//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCSearchStreamingMediaMetadata : NSObject <NSCopying, NSCoding>
{
    unsigned long long _muxedMediaSize;
}

@property(readonly, nonatomic) unsigned long long muxedMediaSize; // @synthesize muxedMediaSize=_muxedMediaSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMuxedMediaSize:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;

@end
