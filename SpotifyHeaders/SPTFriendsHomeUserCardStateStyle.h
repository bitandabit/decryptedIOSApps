//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEDebuggableStyle.h"

@class GLUEButtonStyle, GLUECardDetailsStyle, GLUEImageStyle, NSString, UIColor;

@interface SPTFriendsHomeUserCardStateStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    double _defaultWidth;
    double _alpha;
    UIColor *_backgroundColor;
    double _cornerRadius;
    GLUEButtonStyle *_buttonStyle;
    GLUEImageStyle *_imageStyle;
    double _defaultDetailsHeight;
    GLUECardDetailsStyle *_detailsStyle;
}

@property(copy, nonatomic) GLUECardDetailsStyle *detailsStyle; // @synthesize detailsStyle=_detailsStyle;
@property(nonatomic) double defaultDetailsHeight; // @synthesize defaultDetailsHeight=_defaultDetailsHeight;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(copy, nonatomic) GLUEButtonStyle *buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double defaultWidth; // @synthesize defaultWidth=_defaultWidth;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

