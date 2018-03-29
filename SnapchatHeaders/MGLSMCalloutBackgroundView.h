//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface MGLSMCalloutBackgroundView : UIView
{
    _Bool _highlighted;
    CALayer *_contentMask;
    double _anchorHeight;
    double _anchorMargin;
    struct CGPoint _arrowPoint;
}

+ (id)CalloutArrow_2x;
+ (id)CalloutArrow;
+ (id)embeddedImageNamed:(id)arg1;
+ (id)dataWithBase64EncodedString:(id)arg1;
@property(nonatomic) double anchorMargin; // @synthesize anchorMargin=_anchorMargin;
@property(nonatomic) double anchorHeight; // @synthesize anchorHeight=_anchorHeight;
@property(nonatomic) CALayer *contentMask; // @synthesize contentMask=_contentMask;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct CGPoint arrowPoint; // @synthesize arrowPoint=_arrowPoint;

@end

