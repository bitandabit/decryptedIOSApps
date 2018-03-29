//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCVideoTranscodingLatencyReportItem;

@interface SCVideoTranscodingLatencyReportSubitem : NSObject
{
    SCVideoTranscodingLatencyReportItem *_superItem;
    NSString *_itemID;
    unsigned long long _index;
    double _endSegmentTime;
    double _beginFilteringTime;
    double _endFilteringTime;
    double _inputDuration;
    double _outputDuration;
    double _inputVideoBitrate;
    double _outputVideoBitrate;
    struct CGSize _inputResolution;
    struct CGSize _outputResolution;
}

@property(nonatomic) double outputVideoBitrate; // @synthesize outputVideoBitrate=_outputVideoBitrate;
@property(nonatomic) double inputVideoBitrate; // @synthesize inputVideoBitrate=_inputVideoBitrate;
@property(nonatomic) struct CGSize outputResolution; // @synthesize outputResolution=_outputResolution;
@property(nonatomic) struct CGSize inputResolution; // @synthesize inputResolution=_inputResolution;
@property(nonatomic) double outputDuration; // @synthesize outputDuration=_outputDuration;
@property(nonatomic) double inputDuration; // @synthesize inputDuration=_inputDuration;
@property(nonatomic) double endFilteringTime; // @synthesize endFilteringTime=_endFilteringTime;
@property(nonatomic) double beginFilteringTime; // @synthesize beginFilteringTime=_beginFilteringTime;
@property(nonatomic) double endSegmentTime; // @synthesize endSegmentTime=_endSegmentTime;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) __weak SCVideoTranscodingLatencyReportItem *superItem; // @synthesize superItem=_superItem;
- (void).cxx_destruct;
- (id)metricsWithBeginSegmentTime:(double)arg1;
- (_Bool)isReadyToUpload;

@end
