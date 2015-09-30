//
//  ColorWheel.h
//  Fun Facts
//
//  Created by Alex on 2015-09-30.
//  Copyright © 2015 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKIT/UIKit.h>

@interface ColorWheel : NSObject

@property (nonatomic, strong) NSArray *colors;

-(UIColor *)randomColor;

@end
