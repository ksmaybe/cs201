//
// Created by ksmaybe on 3/6/19.
//
//Write two versions of mkRectangle, one that accepts two points,
// and one that accepts 4 real numbers.
#include <math.h>
#include <stdio.h>

struct point{
    double x;
    double y;
};
struct rectangle{
    struct point ll;
    struct point ur;
} rect1,rect2;

double dist(struct point pt){
    return sqrt(pt.x*pt.x+pt.y*pt.y);
}
struct point mkPoint(double x,double y){
    struct point pt;
    pt.x = x;
    pt.y = y;
    return pt;
};
struct point midPoint(struct point pt1, struct point pt2){
    struct point pt;
    pt.x = (pt1.x+pt2.x) / 2;
    pt.y = (pt1.y+pt2.y) / 2;
    return pt;
};
struct rectangle mkRectangle2(struct point ll, struct point ur){
    struct rectangle rec;
    rec.ll=ll;
    rec.ur=ur;
    return rec;
}
struct rectangle mkRectangle4(double x1,double y1,double x2,double y2){
    struct point pt1=mkPoint(x1,y1);
    struct point pt2=mkPoint(x2,y2);
    struct rectangle rec;
    rec.ll=pt1;
    rec.ur=pt2;
    return rec;
};

int main(int argc,char *argv[]){
    struct point pt1={40.,20.};
    struct point pt2={pt1.x+1.0,pt1.y+1.0};
    rect1=mkRectangle2(pt1,pt2);
    rect2=mkRectangle4(40.,20.,41.,32.);
    return 0;
}