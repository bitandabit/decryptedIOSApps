//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;
@protocol SCGallerySnap;

@interface SCGalleryThumbnailDelayInfo : NSObject
{
    _Bool _didShowUp;
    double _greyDurationInSec;
    NSDate *_logTime;
    NSString *_generationId;
    id <SCGallerySnap> _snap;
}

@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
@property(readonly, nonatomic) NSString *generationId; // @synthesize generationId=_generationId;
@property(readonly, nonatomic) _Bool didShowUp; // @synthesize didShowUp=_didShowUp;
@property(readonly, nonatomic) NSDate *logTime; // @synthesize logTime=_logTime;
@property(readonly, nonatomic) double greyDurationInSec; // @synthesize greyDurationInSec=_greyDurationInSec;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGreyDurationInSec:(double)arg1 logTime:(id)arg2 didShowUp:(_Bool)arg3 generationId:(id)arg4 snap:(id)arg5;

@end
