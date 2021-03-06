//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate;

@interface SCLensMetadataFetcher : NSObject <NSCoding>
{
    NSDate *_retryTimestamp;
    _Bool _isFetching;
    NSDate *_previousUpdateTimestamp;
}

@property(retain, nonatomic) NSDate *previousUpdateTimestamp; // @synthesize previousUpdateTimestamp=_previousUpdateTimestamp;
@property(retain, nonatomic) NSDate *retryTimestamp; // @synthesize retryTimestamp=_retryTimestamp;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
- (void).cxx_destruct;
- (id)lensRequestTimeStampString;
- (void)clearCache;
- (double)updateInterval;
- (double)retryInterval;
- (void)fetchDataWithRequestManager:(id)arg1;
- (void)fetchDataWithRequestManagerIfNecessary:(id)arg1;
- (void)retryFetchDataWithRequestManager:(id)arg1 delay:(double)arg2 error:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

