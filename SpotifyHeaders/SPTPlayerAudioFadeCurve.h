//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SPTPlayerAudioFadeCurve : NSObject
{
    double _startPoint;
    double _endPoint;
    NSArray *_controlPoints;
}

@property(retain, nonatomic) NSArray *controlPoints; // @synthesize controlPoints=_controlPoints;
@property(nonatomic) double endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) double startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;

@end

