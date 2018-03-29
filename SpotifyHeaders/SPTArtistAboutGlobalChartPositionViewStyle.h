//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTArtistAboutGlobalChartPositionViewStyle : NSObject <GLUEStyle>
{
    UIColor *_rankCircleColor;
    unsigned long long _rankCircleDiameter;
    GLUELabelStyle *_rankLabelStyle;
    GLUELabelStyle *_descriptionLabelStyle;
}

@property(copy, nonatomic) GLUELabelStyle *descriptionLabelStyle; // @synthesize descriptionLabelStyle=_descriptionLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *rankLabelStyle; // @synthesize rankLabelStyle=_rankLabelStyle;
@property(nonatomic) unsigned long long rankCircleDiameter; // @synthesize rankCircleDiameter=_rankCircleDiameter;
@property(copy, nonatomic) UIColor *rankCircleColor; // @synthesize rankCircleColor=_rankCircleColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

