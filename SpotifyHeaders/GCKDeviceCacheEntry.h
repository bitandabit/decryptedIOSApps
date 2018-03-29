//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCKTimestamped.h"
#import "NSCoding.h"
#import "NSCopying.h"

@interface GCKDeviceCacheEntry : NSObject <NSCopying, NSCoding, GCKTimestamped>
{
    NSObject *_object;
    double _timeStamp;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end
